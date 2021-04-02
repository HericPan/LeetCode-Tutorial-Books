#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& A) {
    //�߽������ж�
    if ( A.size() == 0)
        return 0;
    int left = 0;
    for (int right = 1; right < A.size(); right++)
        //�����ָ�����ָ��ָ���ֵһ����˵�����ظ��ģ�
        //���ʱ����ָ�벻������ָ����������ơ��������
        //ָ���ֵ��һ���Ͱ���ָ��ָ���ֵ��ǰŲ
        if (A[left] != A[right])
            A[++left] = A[right];
    return ++left;

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
