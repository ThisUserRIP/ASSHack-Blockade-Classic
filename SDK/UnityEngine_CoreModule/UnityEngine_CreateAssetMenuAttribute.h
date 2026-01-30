#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct CreateAssetMenuAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _menuName_k__BackingField;
		mscorlib::System::String* _fileName_k__BackingField;
		int32_t _order_k__BackingField;
		void set_menuName(mscorlib::System::String* value);
		void set_fileName(mscorlib::System::String* value);
		void set_order(int32_t value);
		void _ctor();
	};
}

