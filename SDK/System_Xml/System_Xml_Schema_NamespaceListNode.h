#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_SyntaxTreeNode.h"
namespace System_Xml::System::Xml::Schema { struct NamespaceList; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace System_Xml::System::Xml::Schema { struct SymbolsDictionary; };
namespace System_Xml::System::Xml::Schema { struct InteriorNode; };
namespace System_Xml::System::Xml::Schema { struct Positions; };
namespace System_Xml::System::Xml::Schema { struct BitSet; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml::Schema
{
	struct NamespaceListNode : System_Xml::System::Xml::Schema::SyntaxTreeNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::NamespaceList* namespaceList;
		mscorlib::System::Object* particle;
		void _ctor(System_Xml::System::Xml::Schema::NamespaceList* namespaceList, mscorlib::System::Object* particle);
		mscorlib::System::Collections::ICollection* GetResolvedSymbols(System_Xml::System::Xml::Schema::SymbolsDictionary* symbols);
		void ExpandTree(System_Xml::System::Xml::Schema::InteriorNode* parent, System_Xml::System::Xml::Schema::SymbolsDictionary* symbols, System_Xml::System::Xml::Schema::Positions* positions);
		void ConstructPos(System_Xml::System::Xml::Schema::BitSet* firstpos, System_Xml::System::Xml::Schema::BitSet* lastpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos);
		bool get_IsNullable();
	};
}

