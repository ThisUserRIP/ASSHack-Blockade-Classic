#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_SequenceNode.h"
namespace System_Xml::System::Xml::Schema { struct SequenceNode; };
namespace System_Xml::System::Xml::Schema { struct BitSet; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct SequenceNode_SequenceConstructPosContext
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::SequenceNode* this_;
		System_Xml::System::Xml::Schema::BitSet* firstpos;
		System_Xml::System::Xml::Schema::BitSet* lastpos;
		System_Xml::System::Xml::Schema::BitSet* lastposLeft;
		System_Xml::System::Xml::Schema::BitSet* firstposRight;
		void _ctor(System_Xml::System::Xml::Schema::SequenceNode* node, System_Xml::System::Xml::Schema::BitSet* firstpos, System_Xml::System::Xml::Schema::BitSet* lastpos);
	};
}

