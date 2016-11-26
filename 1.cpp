#include <vector>
#include <string>

struct Point{

	Point(int x_, int y_){
		x=x_;
		y=y_;
	}
	int x,y;
};

class Shape{
	public:

		Shape(char *type){
			m_type =type;

		}



	protected:
	const std::string m_type;

};
class Polygon: public Shape{

	public:
		Polygon(std::vector<Point> v){
		std::vector<Point> m_points=v;
	}

	private:

		const std::vector<Point> m_points;
};


class Circle:public Shape{

	public:
	Circle(Point c, int radius){
	m_center=c;
	m_radius=r;
	}
	private:
	const Point m_center;
	const int m_radius;

};

void main(){

	std::vector<Point> pts;
	pts.push_back(Point(1,2));
	pts.push_back(Point(2,3));
	pts.push_back(Point(3,4));
Shape *shape=new Polygon(pts);
delete shape;


}




