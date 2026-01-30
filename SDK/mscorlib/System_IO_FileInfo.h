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
namespace mscorlib::System::IO { struct StreamReader; };

namespace mscorlib::System::IO
{
	struct FileInfo : mscorlib::System::IO::FileSystemInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _name;
		void _ctor(mscorlib::System::String* fileName);
		void Init(mscorlib::System::String* fileName, bool checkHost);
		mscorlib::System::String* GetDisplayPath(mscorlib::System::String* originalPath);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_DirectoryName();
		mscorlib::System::IO::DirectoryInfo* get_Directory();
		mscorlib::System::IO::StreamReader* OpenText();
		bool get_Exists();
		mscorlib::System::String* ToString();
	};
}

