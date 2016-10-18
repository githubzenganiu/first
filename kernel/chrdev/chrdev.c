#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/cdev.h>
#include<linux/fs.h>
#include<linux/kdev_t.h>
#include<linux/types.h>
#include<linux/uaccess.h>
#include<linux/string.h>
struct cdev chrdev;
unsigned int TestMajor=0;
unsigned int TestMinor=0;
dev_t dev_no;
int ret;

int testopen(struct inode *inode,struct file *file)
{
    printk("cdev init\n");
    return 0;
    
}
ssize_t testwrite(struct file *file, const char __user *usr, size_t len, loff_t *off)
{
    char buf[12];
    
    copy_from_user(buf,usr,strlen(usr));
    printk("%s\n",buf);

}
ssize_t testread(struct file *file, char __user *usr, size_t len, loff_t *off)
{
    char *buf = "hello,user!";
    copy_to_user(usr,buf,20);


}
int testrelease(struct inode *inode, struct file *file)
{
    printk("close\n");
    return 0;

}

struct file_operations fops=
{
    .owner=THIS_MODULE,
    .open = testopen,
    .write = testwrite,
    .read = testread,
    .release = testrelease,
};
static int __init test_init(void)
{
    dev_no = MKDEV(TestMajor,TestMinor);
    if(dev_no>0)
    {
        ret = register_chrdev_region(dev_no,1,"chrdev_test");    
    }
    else
    {
        alloc_chrdev_region(&dev_no,0,1,"chrdev_test");
    }
    if(ret<0)
    {
        return ret;
    }
    cdev_init(&chrdev,&fops);
    chrdev.owner=THIS_MODULE;
    cdev_add(&chrdev,dev_no,1);
    return 0;
}

static int __exit test_exit(void)
{
    unregister_chrdev_region(dev_no,1);
    cdev_del(&chrdev);
    
    return 0;
}

module_init(test_init);
module_exit(test_exit);


MODULE_AUTHOR("FENG");
MODULE_DESCRIPTION("the first module of char drivers");
MODULE_LICENSE("GPL");
MODULE_VERSION("V1.0");
