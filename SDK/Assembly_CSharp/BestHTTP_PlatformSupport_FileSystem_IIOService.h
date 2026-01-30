#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct Stream; };
#include "BestHTTP_PlatformSupport_FileSystem_FileStreamModes.h"

namespace Assembly_CSharp::BestHTTP::PlatformSupport::FileSystem
{
	struct IIOService
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void DirectoryCreate(mscorlib::System::String* path);
		bool DirectoryExists(mscorlib::System::String* path);
		IL2CPP::Array<mscorlib::System::String*>* GetFiles(mscorlib::System::String* path);
		void FileDelete(mscorlib::System::String* path);
		bool FileExists(mscorlib::System::String* path);
		mscorlib::System::IO::Stream* CreateFileStream(mscorlib::System::String* path, Assembly_CSharp::BestHTTP::PlatformSupport::FileSystem::FileStreamModes mode);
	};
}

