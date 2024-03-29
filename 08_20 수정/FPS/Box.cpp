#include "pch.h"
#include "Box.h"

#include "GameManager.h"

Box::Box(int x, int y) : Object(x, y)
	, m_Data{
			{ '1', '1', '1', '1', '1' },
			{ '1', ' ', ' ', ' ', '1' },
			{ '1', ' ', ' ', ' ', '1' },
			{ '1', ' ', ' ', ' ', '1' },
			{ '1', '1', '1', '1', '1' },
	} {m_pNowAni = &m_Data; }

Box::~Box() { }

eObjectType Box::GetObjectType() const
{
	return eObjectType::Box;
}

void Box::Render()
{

}

void Box::Explosived(Bomb* a_refBomb)
{
	GameMng()->RemoveObject(this);
	GameMng()->DropItem(this);
}
