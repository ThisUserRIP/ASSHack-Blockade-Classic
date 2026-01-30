#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Schema { struct DoubleLinkAxis; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct ForwardAxis; };
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml::Schema
{
	struct AxisElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::DoubleLinkAxis* curNode;
		int32_t rootDepth;
		int32_t curDepth;
		bool isMatch;
		System_Xml::System::Xml::Schema::DoubleLinkAxis* get_CurNode();
		void _ctor(System_Xml::System::Xml::Schema::DoubleLinkAxis* node, int32_t depth);
		void SetDepth(int32_t depth);
		void MoveToParent(int32_t depth, System_Xml::System::Xml::Schema::ForwardAxis* parent);
		bool MoveToChild(mscorlib::System::String* name, mscorlib::System::String* URN, int32_t depth, System_Xml::System::Xml::Schema::ForwardAxis* parent);
	};
}

