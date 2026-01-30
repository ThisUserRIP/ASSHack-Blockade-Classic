#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };

namespace Assembly_CSharp::Doozy::Engine::Utils
{
	struct FileUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool IGNORE_META;
			mscorlib::System::String* UNITY_METAFILE_EXTENSION;
			mscorlib::System::String* DOTSTART_HIDDEN_FILE_HEADSTRING;
			wchar_t UNITY_FOLDER_SEPARATOR;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void RemakeDirectory(mscorlib::System::String* localFolderPath);
		static void CopyFile(mscorlib::System::String* sourceFilePath, mscorlib::System::String* targetFilePath);
		static void CopyTemplateFile(mscorlib::System::String* sourceFilePath, mscorlib::System::String* targetFilePath, mscorlib::System::String* srcName, mscorlib::System::String* dstName);
		static void DeleteFileThenDeleteFolderIfEmpty(mscorlib::System::String* localTargetFilePath);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetAllFilePathsInFolder(mscorlib::System::String* localFolderPath, bool includeHidden, bool includeMeta);
		static mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* GetFilePathsInFolder(mscorlib::System::String* folderPath, bool includeHidden, bool includeMeta);
		static void GetFilePathsRecursively(mscorlib::System::String* localFolderPath, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* filePaths, bool includeHidden, bool includeMeta);
		static mscorlib::System::String* PathCombine(IL2CPP::Array<mscorlib::System::String*>* paths);
		static mscorlib::System::String* _PathCombine(mscorlib::System::String* head, mscorlib::System::String* tail);
		static mscorlib::System::String* GetPathWithProjectPath(mscorlib::System::String* pathUnderProjectFolder);
		static mscorlib::System::String* GetPathWithAssetsPath(mscorlib::System::String* pathUnderAssetsFolder);
		static mscorlib::System::String* ProjectPathWithSlash();
		static bool IsMetaFile(mscorlib::System::String* filePath);
		static bool ContainsHiddenFiles(mscorlib::System::String* filePath);
		static void DeleteDirectory(mscorlib::System::String* dirPath, bool isRecursive, bool forceDelete);
		static void RemoveFileAttributes(mscorlib::System::String* dirPath, bool isRecursive);
		static mscorlib::System::String* GetAbsoluteDirectoryPath(mscorlib::System::String* directoryName, bool debug);
		static mscorlib::System::String* GetRelativeDirectoryPath(mscorlib::System::String* directoryName);
		void _ctor();
	};
}

