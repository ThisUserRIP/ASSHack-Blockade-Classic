#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct PlayerPrefs : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool TrySetInt(mscorlib::System::String* key, int32_t value);
		static bool TrySetFloat(mscorlib::System::String* key, float value);
		static bool TrySetSetString(mscorlib::System::String* key, mscorlib::System::String* value);
		static void SetInt(mscorlib::System::String* key, int32_t value);
		static int32_t GetInt(mscorlib::System::String* key, int32_t defaultValue);
		static int32_t GetInt(mscorlib::System::String* key);
		static void SetFloat(mscorlib::System::String* key, float value);
		static float GetFloat(mscorlib::System::String* key, float defaultValue);
		static float GetFloat(mscorlib::System::String* key);
		static void SetString(mscorlib::System::String* key, mscorlib::System::String* value);
		static mscorlib::System::String* GetString(mscorlib::System::String* key, mscorlib::System::String* defaultValue);
		static mscorlib::System::String* GetString(mscorlib::System::String* key);
		static bool HasKey(mscorlib::System::String* key);
		static void DeleteKey(mscorlib::System::String* key);
		static void DeleteAll();
		static void Save();
	};
}

