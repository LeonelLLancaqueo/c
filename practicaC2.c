struct punto{
	int x,y;
};

struct punto puntomedio(){
	struct punto z;
	z.x= (p1.x +p2.x)/2;
	z.y= (p1.y + p2.y)/2;
	return z;
}
