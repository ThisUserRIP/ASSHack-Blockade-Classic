#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_IO_SearchOption.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct DirectoryInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::IO
{
	struct Directory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static IL2CPP::Array<mscorlib::System::String*>* GetFiles(mscorlib::System::String* path);
		static IL2CPP::Array<mscorlib::System::String*>* InternalGetFiles(mscorlib::System::String* path, mscorlib::System::String* searchPattern, mscorlib::System::IO::SearchOption searchOption);
		static IL2CPP::Array<mscorlib::System::String*>* GetDirectories(mscorlib::System::String* path);
		static IL2CPP::Array<mscorlib::System::String*>* GetDirectories(mscorlib::System::String* path, mscorlib::System::String* searchPattern);
		static IL2CPP::Array<mscorlib::System::String*>* GetDirectories(mscorlib::System::String* path, mscorlib::System::String* searchPattern, mscorlib::System::IO::SearchOption searchOption);
		static IL2CPP::Array<mscorlib::System::String*>* InternalGetDirectories(mscorlib::System::String* path, mscorlib::System::String* searchPattern, mscorlib::System::IO::SearchOption searchOption);
		static IL2CPP::Array<mscorlib::System::String*>* InternalGetFileDirectoryNames(mscorlib::System::String* path, mscorlib::System::String* userPathOriginal, mscorlib::System::String* searchPattern, bool includeFiles, bool includeDirs, mscorlib::System::IO::SearchOption searchOption, bool checkHost);
		static mscorlib::System::IO::DirectoryInfo* CreateDirectory_(mscorlib::System::String* path);
		static mscorlib::System::IO::DirectoryInfo* CreateDirectoriesInternal(mscorlib::System::String* path);
		static void Delete(mscorlib::System::String* path);
		static void RecursiveDelete(mscorlib::System::String* path);
		static void Delete(mscorlib::System::String* path, bool recursive);
		static bool Exists(mscorlib::System::String* path);
		static mscorlib::System::String* GetCurrentDirectory_();
		static mscorlib::System::String* InsecureGetCurrentDirectory();
		static bool IsRootDirectory(mscorlib::System::String* path);
		static mscorlib::System::IO::DirectoryInfo* GetParent(mscorlib::System::String* path);
		static mscorlib::System::String* GetDemandDir(mscorlib::System::String* fullPath, bool thisDirOnly);
	};
}

