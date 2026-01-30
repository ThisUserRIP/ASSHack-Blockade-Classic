#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct IntPtr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::IO
{
	struct Path : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* InvalidPathChars;
			wchar_t AltDirectorySeparatorChar;
			wchar_t DirectorySeparatorChar;
			wchar_t PathSeparator;
			mscorlib::System::String* DirectorySeparatorStr;
			wchar_t VolumeSeparatorChar;
			IL2CPP::Array<wchar_t>* PathSeparatorChars;
			bool dirEqualsVolume;
			IL2CPP::Array<wchar_t>* trimEndCharsWindows;
			IL2CPP::Array<wchar_t>* trimEndCharsUnix;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* Combine(mscorlib::System::String* path1, mscorlib::System::String* path2);
		static mscorlib::System::String* CleanPath(mscorlib::System::String* s);
		static mscorlib::System::String* GetDirectoryName(mscorlib::System::String* path);
		static mscorlib::System::String* GetExtension(mscorlib::System::String* path);
		static mscorlib::System::String* GetFileName(mscorlib::System::String* path);
		static mscorlib::System::String* GetFullPath(mscorlib::System::String* path);
		static mscorlib::System::String* GetFullPathInternal(mscorlib::System::String* path);
		static int32_t GetFullPathName(mscorlib::System::String* path, int32_t numBufferChars, mscorlib::System::Text::StringBuilder* buffer, intptr_t& lpFilePartOrNull);
		static mscorlib::System::String* GetFullPathName(mscorlib::System::String* path);
		static mscorlib::System::String* WindowsDriveAdjustment(mscorlib::System::String* path);
		static mscorlib::System::String* InsecureGetFullPath(mscorlib::System::String* path);
		static bool IsDirectorySeparator(wchar_t c);
		static mscorlib::System::String* GetPathRoot(mscorlib::System::String* path);
		static bool IsPathRooted(mscorlib::System::String* path);
		static IL2CPP::Array<wchar_t>* GetInvalidFileNameChars();
		static IL2CPP::Array<wchar_t>* GetInvalidPathChars();
		static int32_t findExtension(mscorlib::System::String* path);
		static void _cctor();
		static mscorlib::System::String* GetServerAndShare(mscorlib::System::String* path);
		static bool SameRoot(mscorlib::System::String* root, mscorlib::System::String* path);
		static mscorlib::System::String* CanonicalizePath(mscorlib::System::String* path);
		static mscorlib::System::String* Combine(IL2CPP::Array<mscorlib::System::String*>* paths);
		static mscorlib::System::String* Combine(mscorlib::System::String* path1, mscorlib::System::String* path2, mscorlib::System::String* path3);
		static void Validate(mscorlib::System::String* path);
		static void Validate(mscorlib::System::String* path, mscorlib::System::String* parameterName);
		static mscorlib::System::String* get_DirectorySeparatorCharAsString();
		static IL2CPP::Array<wchar_t>* get_TrimEndChars();
		static void CheckSearchPattern(mscorlib::System::String* searchPattern);
		static void CheckInvalidPathChars(mscorlib::System::String* path, bool checkAdditional);
		static mscorlib::System::String* InternalCombine(mscorlib::System::String* path1, mscorlib::System::String* path2);
	};
}

