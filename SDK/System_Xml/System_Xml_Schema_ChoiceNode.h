#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_InteriorNode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct SyntaxTreeNode; };
namespace System_Xml::System::Xml::Schema { struct BitSet; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct InteriorNode; };
namespace System_Xml::System::Xml::Schema { struct SymbolsDictionary; };
namespace System_Xml::System::Xml::Schema { struct Positions; };

namespace System_Xml::System::Xml::Schema
{
	struct ChoiceNode : System_Xml::System::Xml::Schema::InteriorNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void ConstructChildPos(System_Xml::System::Xml::Schema::SyntaxTreeNode* child, System_Xml::System::Xml::Schema::BitSet* firstpos, System_Xml::System::Xml::Schema::BitSet* lastpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos);
		void ConstructPos(System_Xml::System::Xml::Schema::BitSet* firstpos, System_Xml::System::Xml::Schema::BitSet* lastpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos);
		bool get_IsNullable();
		void ExpandTree(System_Xml::System::Xml::Schema::InteriorNode* parent, System_Xml::System::Xml::Schema::SymbolsDictionary* symbols, System_Xml::System::Xml::Schema::Positions* positions);
		void _ctor();
	};
}

