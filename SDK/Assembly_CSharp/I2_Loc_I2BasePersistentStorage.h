#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "I2_Loc_PersistentStorage_eFileType.h"

namespace Assembly_CSharp::I2::Loc
{
	struct I2BasePersistentStorage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void SetSetting_String(mscorlib::System::String* key, mscorlib::System::String* value);
		mscorlib::System::String* GetSetting_String(mscorlib::System::String* key, mscorlib::System::String* defaultValue);
		void DeleteSetting(mscorlib::System::String* key);
		void ForceSaveSettings();
		bool HasSetting(mscorlib::System::String* key);
		bool CanAccessFiles();
		mscorlib::System::String* UpdateFilename(Assembly_CSharp::I2::Loc::PersistentStorage_eFileType fileType, mscorlib::System::String* fileName);
		bool SaveFile(Assembly_CSharp::I2::Loc::PersistentStorage_eFileType fileType, mscorlib::System::String* fileName, mscorlib::System::String* data, bool logExceptions);
		mscorlib::System::String* LoadFile(Assembly_CSharp::I2::Loc::PersistentStorage_eFileType fileType, mscorlib::System::String* fileName, bool logExceptions);
		bool DeleteFile(Assembly_CSharp::I2::Loc::PersistentStorage_eFileType fileType, mscorlib::System::String* fileName, bool logExceptions);
		bool HasFile(Assembly_CSharp::I2::Loc::PersistentStorage_eFileType fileType, mscorlib::System::String* fileName, bool logExceptions);
		void _ctor();
	};
}

