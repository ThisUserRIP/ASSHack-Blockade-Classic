#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security::Cryptography { struct CspParameters; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Security::Cryptography
{
	struct KeyPairPersistence : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::CspParameters* _params;
		mscorlib::System::String* _keyvalue;
		mscorlib::System::String* _filename;
		mscorlib::System::String* _container;
		struct StaticFields
		{
			bool _userPathExists;
			mscorlib::System::String* _userPath;
			bool _machinePathExists;
			mscorlib::System::String* _machinePath;
			mscorlib::System::Object* lockobj;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Security::Cryptography::CspParameters* parameters);
		void _ctor(mscorlib::System::Security::Cryptography::CspParameters* parameters, mscorlib::System::String* keyPair);
		mscorlib::System::String* get_Filename();
		mscorlib::System::String* get_KeyValue();
		void set_KeyValue(mscorlib::System::String* value);
		mscorlib::System::Security::Cryptography::CspParameters* get_Parameters();
		bool Load();
		void Save();
		void Remove();
		static mscorlib::System::String* get_UserPath();
		static mscorlib::System::String* get_MachinePath();
		static bool _CanSecure(mscorlib::System::String* root);
		static bool _ProtectUser(mscorlib::System::String* path);
		static bool _ProtectMachine(mscorlib::System::String* path);
		static bool _IsUserProtected(mscorlib::System::String* path);
		static bool _IsMachineProtected(mscorlib::System::String* path);
		static bool CanSecure(mscorlib::System::String* path);
		static bool ProtectUser(mscorlib::System::String* path);
		static bool ProtectMachine(mscorlib::System::String* path);
		static bool IsUserProtected(mscorlib::System::String* path);
		static bool IsMachineProtected(mscorlib::System::String* path);
		bool get_CanChange();
		bool get_UseDefaultKeyContainer();
		bool get_UseMachineKeyStore();
		mscorlib::System::String* get_ContainerName();
		mscorlib::System::Security::Cryptography::CspParameters* Copy(mscorlib::System::Security::Cryptography::CspParameters* p);
		void FromXml(mscorlib::System::String* xml);
		mscorlib::System::String* ToXml();
		static void _cctor();
	};
}

