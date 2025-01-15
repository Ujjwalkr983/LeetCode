/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {

    public int findind(MountainArray mountainArr) {
        int s = 0, e = mountainArr.length()-1, ans = -1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(mountainArr.get(mid) > mountainArr.get(mid+1)){
                ans = mid;
                e = mid-1;
            }
            else if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                s = mid+1;
            }

        }
        return ans;
    }

    public int binarys(int s, int e, MountainArray mountainArr, int target){
        while(s <= e){
            int mid = s + (e-s)/2;
            if(mountainArr.get(mid) == target) return mid;
            else if(target > mountainArr.get(mid)) s = mid+1;
            else e = mid-1;
        }
        return -1;
    }

    public int binarysd(int s, int e, MountainArray mountainArr, int target){
        while(s <= e){
            int mid = s + (e-s)/2;
            if(mountainArr.get(mid) == target) return mid;
            else if(target > mountainArr.get(mid)) e = mid-1;
            else s = mid+1;
        }
        return -1;
    }

    public int findInMountainArray(int target, MountainArray mountainArr) {
        int index = findind(mountainArr);
        int x = binarys(0, index, mountainArr, target);
        int y = binarysd(index+1, mountainArr.length() -1, mountainArr, target);
        if(x==-1) return y;
        else if(y==-1) return x;
        else return Math.min(x,y);
    }
}