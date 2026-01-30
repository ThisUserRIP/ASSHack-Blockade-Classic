#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_FileSystemInfo.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::IO { struct DirectoryInfo; };

namespace mscorlib::System::IO
{
	struct DirectoryInfo : mscorlib::System::IO::FileSystemInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* current;
		mscorlib::System::String* parent;
		void _ctor(mscorlib::System::String* path);
		void _ctor(mscorlib::System::String* path, bool simpleOriginalPath);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void Initialize();
		bool get_Exists();
		mscorlib::System::String* get_Name();
		mscorlib::System::IO::DirectoryInfo* get_Parent();
		void Create();
		IL2CPP::Array<mscorlib::System::IO::DirectoryInfo*>* GetDirectories();
		IL2CPP::Array<mscorlib::System::IO::DirectoryInfo*>* GetDirectories(mscorlib::System::String* searchPattern);
		mscorlib::System::String* ToString();
		void CheckPath(mscorlib::System::String* path);
	};
}

