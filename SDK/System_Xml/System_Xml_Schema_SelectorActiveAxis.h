#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_ActiveAxis.h"
namespace System_Xml::System::Xml::Schema { struct ConstraintStruct; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct Asttree; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct KeySequence; };

namespace System_Xml::System::Xml::Schema
{
	struct SelectorActiveAxis : System_Xml::System::Xml::Schema::ActiveAxis
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::ConstraintStruct* cs;
		mscorlib::System::Collections::ArrayList* KSs;
		int32_t KSpointer;
		int32_t get_lastDepth();
		void _ctor(System_Xml::System::Xml::Schema::Asttree* axisTree, System_Xml::System::Xml::Schema::ConstraintStruct* cs);
		bool EndElement(mscorlib::System::String* localname, mscorlib::System::String* URN);
		int32_t PushKS(int32_t errline, int32_t errcol);
		System_Xml::System::Xml::Schema::KeySequence* PopKS();
	};
}

