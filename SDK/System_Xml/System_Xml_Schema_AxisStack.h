#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml::Schema { struct ForwardAxis; };
namespace System_Xml::System::Xml::Schema { struct ActiveAxis; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml::Schema
{
	struct AxisStack : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* stack;
		System_Xml::System::Xml::Schema::ForwardAxis* subtree;
		System_Xml::System::Xml::Schema::ActiveAxis* parent;
		System_Xml::System::Xml::Schema::ForwardAxis* get_Subtree();
		int32_t get_Length();
		void _ctor(System_Xml::System::Xml::Schema::ForwardAxis* faxis, System_Xml::System::Xml::Schema::ActiveAxis* parent);
		void Push(int32_t depth);
		void Pop();
		static bool Equal(mscorlib::System::String* thisname, mscorlib::System::String* thisURN, mscorlib::System::String* name, mscorlib::System::String* URN);
		void MoveToParent(mscorlib::System::String* name, mscorlib::System::String* URN, int32_t depth);
		bool MoveToChild(mscorlib::System::String* name, mscorlib::System::String* URN, int32_t depth);
		bool MoveToAttribute(mscorlib::System::String* name, mscorlib::System::String* URN, int32_t depth);
	};
}

