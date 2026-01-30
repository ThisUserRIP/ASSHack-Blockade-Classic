#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Doozy::Engine::Utils
{
	struct DataUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void PlayerPrefsSetInt(mscorlib::System::String* key, int32_t value);
		static void PlayerPrefsSetFloat(mscorlib::System::String* key, float value);
		static void PlayerPrefsSetString(mscorlib::System::String* key, mscorlib::System::String* value);
		static int32_t PlayerPrefsGetInt(mscorlib::System::String* key);
		static int32_t PlayerPrefsGetInt(mscorlib::System::String* key, int32_t defaultValue);
		static float PlayerPrefsGetFloat(mscorlib::System::String* key);
		static float PlayerPrefsGetFloat(mscorlib::System::String* key, float defaultValue);
		static mscorlib::System::String* PlayerPrefsGetString(mscorlib::System::String* key);
		static mscorlib::System::String* PlayerPrefsGetString(mscorlib::System::String* key, mscorlib::System::String* defaultValue);
		static void PlayerPrefsDeleteKey(mscorlib::System::String* key);
		static void PlayerPrefsDeleteAll();
		static void PlayerPrefsSave();
		static bool PlayerPrefsHasKey(mscorlib::System::String* key);
	};
}

