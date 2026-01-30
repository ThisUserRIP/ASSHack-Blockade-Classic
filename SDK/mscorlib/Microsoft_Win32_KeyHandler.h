#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::Microsoft::Win32 { struct RegistryKey; };
namespace mscorlib::System::Security { struct SecurityElement; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Object; };
#include "Microsoft_Win32_RegistryValueOptions.h"
#include "Microsoft_Win32_RegistryValueKind.h"

namespace mscorlib::Microsoft::Win32
{
	struct KeyHandler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Dir;
		mscorlib::System::String* ActualDir;
		bool IsVolatile;
		mscorlib::System::Collections::Hashtable* values;
		mscorlib::System::String* file;
		bool dirty;
		struct StaticFields
		{
			mscorlib::System::Collections::Hashtable* key_to_handler;
			mscorlib::System::Collections::Hashtable* dir_to_handler;
			mscorlib::System::String* user_store;
			mscorlib::System::String* machine_store;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* basedir);
		void _ctor(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* basedir, bool is_volatile);
		void Load();
		void LoadKey(mscorlib::System::Security::SecurityElement* se);
		mscorlib::Microsoft::Win32::RegistryKey* Ensure(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* extra, bool writable, bool is_volatile);
		mscorlib::Microsoft::Win32::RegistryKey* Probe(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* extra, bool writable);
		static mscorlib::System::String* CombineName(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* extra);
		static int64_t GetSystemBootTime();
		static int64_t GetRegisteredBootTime(mscorlib::System::String* path);
		static void SaveRegisteredBootTime(mscorlib::System::String* path, int64_t btime);
		static void CleanVolatileKeys();
		static bool VolatileKeyExists(mscorlib::System::String* dir);
		static mscorlib::System::String* GetVolatileDir(mscorlib::System::String* dir);
		static mscorlib::Microsoft::Win32::KeyHandler* Lookup(mscorlib::Microsoft::Win32::RegistryKey* rkey, bool createNonExisting);
		static mscorlib::System::String* GetRootFromDir(mscorlib::System::String* dir);
		static void Drop(mscorlib::Microsoft::Win32::RegistryKey* rkey);
		mscorlib::System::Object* GetValue(mscorlib::System::String* name, mscorlib::Microsoft::Win32::RegistryValueOptions options);
		IL2CPP::Array<mscorlib::System::String*>* GetSubKeyNames();
		void SetValue(mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::Microsoft::Win32::RegistryValueKind valueKind);
		void SetDirty();
		void DirtyTimeout(mscorlib::System::Object* state);
		void Flush();
		bool ValueExists(mscorlib::System::String* name);
		bool get_IsMarkedForDeletion();
		void Finalize();
		void Save();
		static mscorlib::System::String* get_UserStore();
		static mscorlib::System::String* get_MachineStore();
	};
}

