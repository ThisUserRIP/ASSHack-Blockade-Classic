#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_Event.h"
namespace Assembly_CSharp { struct vp_Attempt_Tryer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct vp_Attempt : Assembly_CSharp::vp_Event
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_Attempt_Tryer* Try;
		static bool AlwaysOK();
		void _ctor(mscorlib::System::String* name);
		void InitFields();
		void Register(mscorlib::System::Object* t, mscorlib::System::String* m, int32_t v);
		void Unregister(mscorlib::System::Object* t);
	};
}

