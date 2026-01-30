#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "LitJson_JsonType.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::LitJson { struct JsonWriter; };

namespace Assembly_CSharp::LitJson
{
	struct IJsonWrapper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_IsArray();
		bool get_IsBoolean();
		bool get_IsDouble();
		bool get_IsInt();
		bool get_IsLong();
		bool get_IsObject();
		bool get_IsString();
		bool GetBoolean();
		double GetDouble();
		int32_t GetInt();
		Assembly_CSharp::LitJson::JsonType GetJsonType();
		int64_t GetLong();
		mscorlib::System::String* GetString();
		void SetBoolean(bool val);
		void SetDouble(double val);
		void SetInt(int32_t val);
		void SetJsonType(Assembly_CSharp::LitJson::JsonType type);
		void SetLong(int64_t val);
		void SetString(mscorlib::System::String* val);
		mscorlib::System::String* ToJson();
		void ToJson(Assembly_CSharp::LitJson::JsonWriter* writer);
	};
}

