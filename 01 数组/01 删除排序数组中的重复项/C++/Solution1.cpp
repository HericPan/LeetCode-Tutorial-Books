#include <iostream>
#include <vector>
using namespace std;

/*
��Ϊ����������ģ�ֻҪ����ͬ�Ŀ϶��ǰ��ŵģ�����ֻ��Ҫ�����������飬Ȼ��ǰ�������Ƚϣ��������ͬ�ľͰѺ���ĸ�ɾ����

1��˫ָ����
ʹ������ָ�룬��ָ��ʼ�������ƶ���

�����ָ��ָ���ֵ������ָ��ָ���ֵ����ô��ָ����������ƶ�����ָ�벻����
�����ָ��ָ���ֵ��������ָ��ָ���ֵ����ô�Ͱ���ָ��ָ���ֵ�����ƣ�ͬʱ��ָ��Ҫ������һ����

���ߣ����ݽṹ���㷨
���ӣ�https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2gy9m/?discussion=4Zkrel
��Դ�����ۣ�LeetCode��
����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������
 */

int removeDuplicates(vector<int>& nums) {
    unsigned int j = nums.size();
    if (j > 1)
    {
        for (unsigned int i = 1; i <= j; i++)
        {
            if (nums.size() > 1 && nums[1] == nums[0]){
                nums.erase(nums.begin());
            } else {
                nums.push_back(nums[0]);
                nums.erase(nums.begin());

            }
        }
    }
    return nums.size();
}

int main() {
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    // nums ���ԡ����á���ʽ���ݵġ�Ҳ����˵������ʵ�����κο���
    int len = removeDuplicates(nums);

// �ں������޸�����������ڵ������ǿɼ��ġ�
// ������ĺ������صĳ���, �����ӡ�������� �ó��ȷ�Χ�� ������Ԫ�ء�
    for (int i = 0; i < len; i++) {
        cout << nums[i];
    }

}
