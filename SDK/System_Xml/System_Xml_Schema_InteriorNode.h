#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_SyntaxTreeNode.h"
namespace System_Xml::System::Xml::Schema { struct SyntaxTreeNode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct SymbolsDictionary; };
namespace System_Xml::System::Xml::Schema { struct Positions; };

namespace System_Xml::System::Xml::Schema
{
	struct InteriorNode : System_Xml::System::Xml::Schema::SyntaxTreeNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::SyntaxTreeNode* leftChild;
		System_Xml::System::Xml::Schema::SyntaxTreeNode* rightChild;
		System_Xml::System::Xml::Schema::SyntaxTreeNode* get_LeftChild();
		void set_LeftChild(System_Xml::System::Xml::Schema::SyntaxTreeNode* value);
		System_Xml::System::Xml::Schema::SyntaxTreeNode* get_RightChild();
		void set_RightChild(System_Xml::System::Xml::Schema::SyntaxTreeNode* value);
		void ExpandTreeNoRecursive(System_Xml::System::Xml::Schema::InteriorNode* parent, System_Xml::System::Xml::Schema::SymbolsDictionary* symbols, System_Xml::System::Xml::Schema::Positions* positions);
		void ExpandTree(System_Xml::System::Xml::Schema::InteriorNode* parent, System_Xml::System::Xml::Schema::SymbolsDictionary* symbols, System_Xml::System::Xml::Schema::Positions* positions);
		void _ctor();
	};
}

