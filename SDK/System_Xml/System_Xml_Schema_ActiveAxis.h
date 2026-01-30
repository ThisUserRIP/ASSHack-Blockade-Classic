#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct Asttree; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml::Schema
{
	struct ActiveAxis : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t currentDepth;
		bool isActive;
		System_Xml::System::Xml::Schema::Asttree* axisTree;
		mscorlib::System::Collections::ArrayList* axisStack;
		int32_t get_CurrentDepth();
		void Reactivate();
		void _ctor(System_Xml::System::Xml::Schema::Asttree* axisTree);
		bool MoveToStartElement(mscorlib::System::String* localname, mscorlib::System::String* URN);
		bool EndElement(mscorlib::System::String* localname, mscorlib::System::String* URN);
		bool MoveToAttribute(mscorlib::System::String* localname, mscorlib::System::String* URN);
	};
}

