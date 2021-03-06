// IdNamedObj.cpp

#include <stdafx.h>

#include "IdNamedObj.h"

static wchar_t temp_pattern_string[512];

const wchar_t* IdNamedObj::GetShortString(void)const
{
	if(m_title_made_from_id)
	{
		swprintf(temp_pattern_string, 512, _T("%s %d"), GetTypeString(), m_id);
		return temp_pattern_string;
	}
	return m_title.c_str();}

void IdNamedObj::OnEditString(const wchar_t* str)
{
    m_title.assign(str);
	m_title_made_from_id = false;
}
