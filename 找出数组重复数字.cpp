//�ҳ��������ظ������֡�
//��һ������Ϊ n ������ nums ����������ֶ��� 0��n - 1 �ķ�Χ�ڡ�������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ����ҳ�����������һ���ظ������֡�

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {

        int s = nums.size();
        int n[100000] = { 0 };
        for (int i = 0; i < s; i++) {
            n[nums[i]]++;
        }
        for (int j = 0; j < s; j++) {
            if (n[j] >= 2) {
                return j;

            }
        }
        return -1;
    }
};