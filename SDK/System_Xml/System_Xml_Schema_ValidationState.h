#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_Schema_XmlSchemaContentProcessing.h"
#include "System_Xml_Schema_XmlSchemaValidity.h"
namespace System_Xml::System::Xml::Schema { struct SchemaElementDecl; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct ConstraintStruct; };
#include "System_Xml_Schema_StateUnion.h"
namespace System_Xml::System::Xml::Schema { struct StateUnion; };
namespace System_Xml::System::Xml::Schema { struct BitSet; };
#include "System_Xml_Schema_RangePositionInfo.h"
namespace System_Xml::System::Xml::Schema { struct RangePositionInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct ValidationState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool IsNill;
		bool IsDefault;
		bool NeedValidateChildren;
		bool CheckRequiredAttribute;
		bool ValidationSkipped;
		System_Xml::System::Xml::Schema::XmlSchemaContentProcessing ProcessContents;
		System_Xml::System::Xml::Schema::XmlSchemaValidity Validity;
		System_Xml::System::Xml::Schema::SchemaElementDecl* ElementDecl;
		System_Xml::System::Xml::Schema::SchemaElementDecl* ElementDeclBeforeXsi;
		mscorlib::System::String* LocalName;
		mscorlib::System::String* Namespace;
		IL2CPP::Array<System_Xml::System::Xml::Schema::ConstraintStruct*>* Constr;
		System_Xml::System::Xml::Schema::StateUnion CurrentState;
		bool HasMatched;
		IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* CurPos;
		System_Xml::System::Xml::Schema::BitSet* AllElementsSet;
		mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::Schema::RangePositionInfo>* RunningPositions;
		bool TooComplex;
		void _ctor();
	};
}

