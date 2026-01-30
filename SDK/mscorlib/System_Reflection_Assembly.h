#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Reflection { struct Assembly_ResolveEventHolder; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::IO { struct FileStream; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct Module; };
namespace mscorlib::System::IO { struct Stream; };
#include "System_Threading_StackCrawlMark.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Version; };
#include "System_Reflection_AssemblyNameFlags.h"
namespace mscorlib::System::Reflection { struct AssemblyName; };
namespace mscorlib::System::Reflection { struct RuntimeAssembly; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Security::Policy { struct Evidence; };
namespace mscorlib::System::Reflection { struct ManifestResourceInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Exception; };

namespace mscorlib::System::Reflection
{
	struct Assembly : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t _mono_assembly;
		mscorlib::System::Reflection::Assembly_ResolveEventHolder* resolve_event_holder;
		mscorlib::System::Object* _evidence;
		mscorlib::System::Object* _minimum;
		mscorlib::System::Object* _optional;
		mscorlib::System::Object* _refuse;
		mscorlib::System::Object* _granted;
		mscorlib::System::Object* _denied;
		bool fromByteArray;
		mscorlib::System::String* assemblyName;
		void _ctor();
		mscorlib::System::String* get_code_base(bool escaped);
		mscorlib::System::String* get_fullname();
		mscorlib::System::String* get_location();
		static mscorlib::System::String* GetAotId();
		mscorlib::System::String* GetCodeBase(bool escaped);
		mscorlib::System::String* get_CodeBase();
		mscorlib::System::String* get_EscapedCodeBase();
		mscorlib::System::String* get_FullName();
		void set_FromByteArray(bool value);
		mscorlib::System::String* get_Location();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		mscorlib::System::Object* GetFilesInternal(mscorlib::System::String* name, bool getResourceModules);
		mscorlib::System::IO::FileStream* GetFile(mscorlib::System::String* name);
		intptr_t GetManifestResourceInternal(mscorlib::System::String* name, int32_t& size, mscorlib::System::Reflection::Module& module);
		mscorlib::System::IO::Stream* GetManifestResourceStream(mscorlib::System::String* name);
		mscorlib::System::IO::Stream* GetManifestResourceStream(mscorlib::System::Type* type, mscorlib::System::String* name, bool skipSecurityCheck, mscorlib::System::Threading::StackCrawlMark& stackMark);
		mscorlib::System::IO::Stream* GetManifestResourceStream(mscorlib::System::String* name, mscorlib::System::Threading::StackCrawlMark& stackMark, bool skipSecurityCheck);
		mscorlib::System::String* GetSimpleName();
		IL2CPP::Array<uint8_t>* GetPublicKey();
		mscorlib::System::Version* GetVersion();
		mscorlib::System::Reflection::AssemblyNameFlags GetFlags();
		IL2CPP::Array<mscorlib::System::Type*>* GetTypes(bool exportedOnly);
		IL2CPP::Array<mscorlib::System::Type*>* GetTypes();
		mscorlib::System::Type* GetType(mscorlib::System::String* name, bool throwOnError);
		mscorlib::System::Type* GetType(mscorlib::System::String* name);
		mscorlib::System::Type* InternalGetType(mscorlib::System::Reflection::Module* module, mscorlib::System::String* name, bool throwOnError, bool ignoreCase);
		mscorlib::System::Reflection::AssemblyName* GetName(bool copiedName);
		mscorlib::System::Reflection::AssemblyName* GetName();
		mscorlib::System::String* ToString();
		static mscorlib::System::Reflection::Assembly* GetAssembly(mscorlib::System::Type* type);
		static mscorlib::System::Reflection::Assembly* GetEntryAssembly();
		mscorlib::System::Reflection::RuntimeAssembly* InternalGetSatelliteAssembly(mscorlib::System::String* name, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Version* version, bool throwOnFileNotFound, mscorlib::System::Threading::StackCrawlMark& stackMark);
		static mscorlib::System::Reflection::Assembly* LoadFrom(mscorlib::System::String* assemblyFile, bool refonly);
		static mscorlib::System::Reflection::Assembly* LoadFrom(mscorlib::System::String* assemblyFile);
		static mscorlib::System::Reflection::Assembly* LoadFrom(mscorlib::System::String* assemblyFile, mscorlib::System::Security::Policy::Evidence* securityEvidence);
		static mscorlib::System::Reflection::Assembly* Load(mscorlib::System::String* assemblyString);
		static mscorlib::System::Reflection::Assembly* Load(mscorlib::System::Reflection::AssemblyName* assemblyRef);
		static mscorlib::System::Reflection::Assembly* Load(IL2CPP::Array<uint8_t>* rawAssembly);
		static mscorlib::System::Reflection::Assembly* load_with_partial_name(mscorlib::System::String* name, mscorlib::System::Security::Policy::Evidence* e);
		static mscorlib::System::Reflection::Assembly* LoadWithPartialName(mscorlib::System::String* partialName, mscorlib::System::Security::Policy::Evidence* securityEvidence);
		static mscorlib::System::Reflection::Assembly* LoadWithPartialName(mscorlib::System::String* partialName, mscorlib::System::Security::Policy::Evidence* securityEvidence, bool oldBehavior);
		mscorlib::System::Object* CreateInstance(mscorlib::System::String* typeName, bool ignoreCase);
		IL2CPP::Array<mscorlib::System::Reflection::Module*>* GetModules();
		IL2CPP::Array<mscorlib::System::Reflection::Module*>* GetModulesInternal();
		IL2CPP::Array<mscorlib::System::String*>* GetManifestResourceNames();
		static mscorlib::System::Reflection::Assembly* GetExecutingAssembly();
		static mscorlib::System::Reflection::Assembly* GetCallingAssembly();
		bool GetManifestResourceInfoInternal(mscorlib::System::String* name, mscorlib::System::Reflection::ManifestResourceInfo* info);
		mscorlib::System::Reflection::ManifestResourceInfo* GetManifestResourceInfo(mscorlib::System::String* resourceName);
		bool get_ReflectionOnly();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* o);
		static mscorlib::System::Exception* CreateNIE();
		bool get_IsFullyTrusted();
		mscorlib::System::Type* GetType(mscorlib::System::String* name, bool throwOnError, bool ignoreCase);
		mscorlib::System::Reflection::Module* GetModule(mscorlib::System::String* name);
		IL2CPP::Array<mscorlib::System::Reflection::Module*>* GetModules(bool getResourceModules);
		bool get_IsDynamic();
		static bool op_Equality(mscorlib::System::Reflection::Assembly* left, mscorlib::System::Reflection::Assembly* right);
		static bool op_Inequality(mscorlib::System::Reflection::Assembly* left, mscorlib::System::Reflection::Assembly* right);
	};
	bool operator==(mscorlib::System::Reflection::Assembly& left, mscorlib::System::Reflection::Assembly& right);
	bool operator!=(mscorlib::System::Reflection::Assembly& left, mscorlib::System::Reflection::Assembly& right);
}

