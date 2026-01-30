#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_LeafNode.h"
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
namespace System_Xml::System::Xml::Schema { struct BitSet; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct InteriorNode; };
namespace System_Xml::System::Xml::Schema { struct SymbolsDictionary; };
namespace System_Xml::System::Xml::Schema { struct Positions; };

namespace System_Xml::System::Xml::Schema
{
	struct LeafRangeNode : System_Xml::System::Xml::Schema::LeafNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Decimal min;
		mscorlib::System::Decimal max;
		System_Xml::System::Xml::Schema::BitSet* nextIteration;
		void _ctor(mscorlib::System::Decimal min, mscorlib::System::Decimal max);
		void _ctor(int32_t pos, mscorlib::System::Decimal min, mscorlib::System::Decimal max);
		mscorlib::System::Decimal get_Max();
		mscorlib::System::Decimal get_Min();
		System_Xml::System::Xml::Schema::BitSet* get_NextIteration();
		void set_NextIteration(System_Xml::System::Xml::Schema::BitSet* value);
		bool get_IsRangeNode();
		void ExpandTree(System_Xml::System::Xml::Schema::InteriorNode* parent, System_Xml::System::Xml::Schema::SymbolsDictionary* symbols, System_Xml::System::Xml::Schema::Positions* positions);
	};
}

