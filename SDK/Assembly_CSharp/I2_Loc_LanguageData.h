#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct LanguageData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Name;
		mscorlib::System::String* Code;
		uint8_t Flags;
		bool Compressed;
		bool IsEnabled();
		void SetEnabled(bool bEnabled);
		bool IsLoaded();
		bool CanBeUnloaded();
		void SetLoaded(bool loaded);
		void SetCanBeUnLoaded(bool allowUnloading);
		void _ctor();
	};
}

