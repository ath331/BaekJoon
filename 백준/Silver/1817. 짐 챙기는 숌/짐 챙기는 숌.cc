#include <cstdio>
int main(void){
	int N, M, book, weight=0, ans=0;
	//weight는 박스에 담긴 책의 무게, ans는 박스의 수 
	scanf("%d %d", &N, &M);
	for(int i=0; i<N; i++){
		scanf("%d",&book);
		if(weight + book > M){//박스 최대용량을 넘으면 
			weight = book;//새 박스에 담고 
			ans++;//박스 수 하나 추가 
		}
		else//박스 최대용량을 넘지 않으면 
			weight += book;//거기에 담음 
	}
	if(weight)//마지막 박스에 책이 있으면 
		ans++;
	printf("%d",ans);
}