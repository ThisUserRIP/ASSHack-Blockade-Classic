#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::I2::Loc { struct I2CustomPersistentStorage; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "I2_Loc_PersistentStorage_eFileType.h"

namespace Assembly_CSharp::I2::Loc
{
	struct PersistentStorage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::I2::Loc::I2CustomPersistentStorage* mStorage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void SetSetting_String(mscorlib::System::String* key, mscorlib::System::String* value);
		static mscorlib::System::String* GetSetting_String(mscorlib::System::String* key, mscorlib::System::String* defaultValue);
		static void DeleteSetting(mscorlib::System::String* key);
		static bool HasSetting(mscorlib::System::String* key);
		static void ForceSaveSettings();
		static bool CanAccessFiles();
		static bool SaveFile(Assembly_CSharp::I2::Loc::PersistentStorage_eFileType fileType, mscorlib::System::String* fileName, mscorlib::System::String* data, bool logExceptions);
		static mscorlib::System::String* LoadFile(Assembly_CSharp::I2::Loc::PersistentStorage_eFileType fileType, mscorlib::System::String* fileName, bool logExceptions);
		static bool DeleteFile(Assembly_CSharp::I2::Loc::PersistentStorage_eFileType fileType, mscorlib::System::String* fileName, bool logExceptions);
		static bool HasFile(Assembly_CSharp::I2::Loc::PersistentStorage_eFileType fileType, mscorlib::System::String* fileName, bool logExceptions);
	};
}

