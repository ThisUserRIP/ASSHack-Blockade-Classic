#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::MS::Internal::Xml::XPath { struct Axis; };

namespace System_Xml::System::Xml::Schema
{
	struct Asttree : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* fAxisArray;
		mscorlib::System::String* xpathexpr;
		bool isField;
		System_Xml::System::Xml::XmlNamespaceManager* nsmgr;
		mscorlib::System::Collections::ArrayList* get_SubtreeArray();
		void _ctor(mscorlib::System::String* xPath, bool isField, System_Xml::System::Xml::XmlNamespaceManager* nsmgr);
		static bool IsNameTest(System_Xml::MS::Internal::Xml::XPath::Axis* ast);
		static bool IsAttribute(System_Xml::MS::Internal::Xml::XPath::Axis* ast);
		static bool IsDescendantOrSelf(System_Xml::MS::Internal::Xml::XPath::Axis* ast);
		static bool IsSelf(System_Xml::MS::Internal::Xml::XPath::Axis* ast);
		void CompileXPath(mscorlib::System::String* xPath, bool isField, System_Xml::System::Xml::XmlNamespaceManager* nsmgr);
		void SetURN(System_Xml::MS::Internal::Xml::XPath::Axis* axis, System_Xml::System::Xml::XmlNamespaceManager* nsmgr);
	};
}

