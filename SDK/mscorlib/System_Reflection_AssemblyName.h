#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Reflection_AssemblyNameFlags.h"
#include "System_Configuration_Assemblies_AssemblyHashAlgorithm.h"
namespace mscorlib::System::Reflection { struct StrongNameKeyPair; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Configuration_Assemblies_AssemblyVersionCompatibility.h"
namespace mscorlib::System { struct Version; };
#include "System_Reflection_ProcessorArchitecture.h"
#include "System_Reflection_AssemblyContentType.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::Mono { struct MonoAssemblyName; };
namespace mscorlib::Mono { struct MonoAssemblyName; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct Assembly; };

namespace mscorlib::System::Reflection
{
	struct AssemblyName : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		mscorlib::System::String* codebase;
		int32_t major;
		int32_t minor;
		int32_t build;
		int32_t revision;
		mscorlib::System::Globalization::CultureInfo* cultureinfo;
		mscorlib::System::Reflection::AssemblyNameFlags flags;
		mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm hashalg;
		mscorlib::System::Reflection::StrongNameKeyPair* keypair;
		IL2CPP::Array<uint8_t>* publicKey;
		IL2CPP::Array<uint8_t>* keyToken;
		mscorlib::System::Configuration::Assemblies::AssemblyVersionCompatibility versioncompat;
		mscorlib::System::Version* version;
		mscorlib::System::Reflection::ProcessorArchitecture processor_architecture;
		mscorlib::System::Reflection::AssemblyContentType contentType;
		void _ctor();
		static bool ParseAssemblyName(intptr_t name, mscorlib::Mono::MonoAssemblyName& aname, bool& is_version_definited, bool& is_token_defined);
		void _ctor(mscorlib::System::String* assemblyName);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* si, mscorlib::System::Runtime::Serialization::StreamingContext sc);
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		mscorlib::System::String* get_CodeBase();
		mscorlib::System::Globalization::CultureInfo* get_CultureInfo();
		void set_CultureInfo(mscorlib::System::Globalization::CultureInfo* value);
		mscorlib::System::Reflection::AssemblyNameFlags get_Flags();
		void set_Flags(mscorlib::System::Reflection::AssemblyNameFlags value);
		mscorlib::System::String* get_FullName();
		mscorlib::System::Version* get_Version();
		void set_Version(mscorlib::System::Version* value);
		mscorlib::System::String* ToString();
		IL2CPP::Array<uint8_t>* GetPublicKey();
		IL2CPP::Array<uint8_t>* GetPublicKeyToken();
		bool get_IsPublicKeyValid();
		IL2CPP::Array<uint8_t>* InternalGetPublicKeyToken();
		static void get_public_token(uint8_t* token, uint8_t* pubkey, int32_t len);
		IL2CPP::Array<uint8_t>* ComputePublicKeyToken();
		void SetPublicKey(IL2CPP::Array<uint8_t>* publicKey);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Object* Clone();
		void OnDeserialization(mscorlib::System::Object* sender);
		static mscorlib::Mono::MonoAssemblyName* GetNativeName(intptr_t assembly_ptr);
		void FillName(mscorlib::Mono::MonoAssemblyName* native, mscorlib::System::String* codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef);
		static mscorlib::System::Reflection::AssemblyName* Create(mscorlib::System::Reflection::Assembly* assembly, bool fillCodebase);
	};
}

