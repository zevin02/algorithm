#include"consistent_hash.hpp"
int main()
{
    //测试均衡性
    ConsistentHash ch(1);//每个物理节点绑定一个虚拟机器
    ch.initialize();
    string label="初始状态";
    ch.statisticpref(label,0,65536);//一个哈希环
    ConsistentHash ch2(32);//每个机器
    ch2.initialize();
    string label2="初始状态";
    ch2.statisticpref(label2,0,65536);
    //当没有虚拟节点的时候，一致性hash的均衡性很差，也就是节点超载
    //而如果没有节点虚拟出很多节点的时候，数据都分布到很多的存储机器上了


    //插入，删除
    ConsistentHash ch3(32);
    ch3.initialize();
    string label3 ="删除物理节点";
    string ip1="192.168.1.101";
    ch3.DeletePhysicalNode(ip1);
    ch3.statisticpref(label3,0,65536);
    ConsistentHash ch4(32);
    ch4.initialize();
    string ip2="192.168.1.108";
    string label4="插入物理节点";
    ch4.AddNewPhysicalNode(ip2);
    ch4.statisticpref(label4,0,65536);



    return 0;
}