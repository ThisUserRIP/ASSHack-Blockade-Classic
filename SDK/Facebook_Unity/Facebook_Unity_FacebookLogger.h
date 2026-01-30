#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facebook_Unity::Facebook::Unity { struct IFacebookLogger; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FacebookLogger : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Facebook_Unity::Facebook::Unity::IFacebookLogger* _Instance_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static Facebook_Unity::Facebook::Unity::IFacebookLogger* get_Instance();
		static void set_Instance(Facebook_Unity::Facebook::Unity::IFacebookLogger* value);
		static void Log(mscorlib::System::String* msg);
		static void Info(mscorlib::System::String* msg);
		static void Warn(mscorlib::System::String* msg);
		static void Warn(mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::String*>* args);
	};
}

