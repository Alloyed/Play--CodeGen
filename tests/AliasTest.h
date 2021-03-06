#pragma once

#include "Test.h"
#include "MemoryFunction.h"
#include "Align16.h"

class CAliasTest : public CTest
{
public:
						CAliasTest();
	virtual				~CAliasTest();
			
	void				Run();
	void				Compile(Jitter::CJitter&);

private:
	struct CONTEXT
	{
		ALIGN16

		uint32		value0[2];
		uint32		value1[2];

		uint32		value2[4];
		uint32		value3[4];
		uint32		value4[4];

		uint32		result;
	};

	CONTEXT				m_context;
	CMemoryFunction		m_function;
};
