#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "vp_ComponentPreset.h"
namespace Assembly_CSharp { struct vp_ComponentPreset; };
#include "..\mscorlib\System_RuntimeFieldHandle.h"
namespace mscorlib::System { struct RuntimeFieldHandle; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_ComponentPreset_Field : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::RuntimeFieldHandle FieldHandle;
		mscorlib::System::Object* Args;
		void _ctor(mscorlib::System::RuntimeFieldHandle fieldHandle, mscorlib::System::Object* args);
	};
}

