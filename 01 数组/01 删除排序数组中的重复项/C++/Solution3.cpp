#include <iostream>
#include <vector>
using namespace std;

// ����汾������
/*
 �����������ȥ���쳣��������������null������Ϊ�յ�����ų���
 ������ĿҪ��ֻ����ԭ������ɾ�����Ҹ������Ǹ��ź�������顣
 ��ô���ǿ��Զ���һ���α� index������¼��Ҫ�滻Ϊ�������ݵ�λ�á�
 ���ڵ�һ��Ԫ�ؿ϶���Ҫ�����������еģ�
 �����ʼ�����ǽ��α�ָ������ĵڶ���Ԫ�أ���λ��Ϊ�����滻Ԫ�ص�λ�ã���
 �����±�ָ��ڶ���Ԫ�ء��ж��α�ָ��λ�õ�ǰһ��Ԫ�ص�ֵ�͵�ǰ��ȡ�������±�ֵ�Ƿ���ͬ��
 ����ͬ�����α�λ�ò��䣬�����±���ơ�
 ����ͬ��������Ҫ����Ԫ���滻���α�ָ���λ�á����滻Ԫ�أ������α�ָ����һ��λ�ã�
 �������һ��
���˲���ѭ����������ɵõ����ս����

���ߣ����
���ӣ�https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2gy9m/?discussion=INWOZy
��Դ�����ۣ�LeetCode��
����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������
 */

int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) {
        return 0;
    }

    int count = 1;
    int index = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[index - 1]) {
            continue;
        }
        nums[index] = nums[i];
        index++;
        count++;
    }
    return count;



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
