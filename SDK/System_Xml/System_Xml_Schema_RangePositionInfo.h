#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System_Xml::System::Xml::Schema { struct BitSet; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };

namespace System_Xml::System::Xml::Schema
{
	struct RangePositionInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::BitSet* curpos;
		IL2CPP::Array<mscorlib::System::Decimal>* rangeCounters;
	};
}

