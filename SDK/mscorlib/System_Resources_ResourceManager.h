#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Resources { struct ResourceSet; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Resources { struct ResourceManager_CultureNameResourceSetPair; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Resources_UltimateResourceFallbackLocation.h"
namespace mscorlib::System { struct Version; };
namespace mscorlib::System::Reflection { struct RuntimeAssembly; };
namespace mscorlib::System::Resources { struct IResourceGroveler; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Threading_StackCrawlMark.h"
namespace mscorlib::System::Reflection { struct AssemblyName; };

namespace mscorlib::System::Resources
{
	struct ResourceManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* BaseNameField;
		mscorlib::System::Collections::Hashtable* ResourceSets;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceSet>* _resourceSets;
		mscorlib::System::String* moduleDir;
		mscorlib::System::Reflection::Assembly* MainAssembly;
		mscorlib::System::Type* _locationInfo;
		mscorlib::System::Type* _userResourceSet;
		mscorlib::System::Globalization::CultureInfo* _neutralResourcesCulture;
		mscorlib::System::Resources::ResourceManager_CultureNameResourceSetPair* _lastUsedResourceCache;
		bool _ignoreCase;
		bool UseManifest;
		bool UseSatelliteAssem;
		mscorlib::System::Resources::UltimateResourceFallbackLocation _fallbackLoc;
		mscorlib::System::Version* _satelliteContractVersion;
		bool _lookedForSatelliteContractVersion;
		mscorlib::System::Reflection::Assembly* _callingAssembly;
		mscorlib::System::Reflection::RuntimeAssembly* m_callingAssembly;
		mscorlib::System::Resources::IResourceGroveler* resourceGroveler;
		struct StaticFields
		{
			int32_t MagicNumber;
			int32_t HeaderVersionNumber;
			mscorlib::System::Type* _minResourceSet;
			mscorlib::System::String* ResReaderTypeName;
			mscorlib::System::String* ResSetTypeName;
			mscorlib::System::String* MscorlibName;
			int32_t DEBUG;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Init();
		void _ctor();
		void _ctor(mscorlib::System::String* baseName, mscorlib::System::Reflection::Assembly* assembly);
		void _ctor(mscorlib::System::Type* resourceSource);
		void OnDeserializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void OnDeserialized(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void OnSerializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void CommonAssemblyInit();
		mscorlib::System::String* get_BaseName();
		bool get_IgnoreCase();
		mscorlib::System::Resources::UltimateResourceFallbackLocation get_FallbackLocation();
		mscorlib::System::String* GetResourceFileName(mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::Resources::ResourceSet* GetFirstResourceSet(mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::Resources::ResourceSet* GetResourceSet(mscorlib::System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents);
		mscorlib::System::Resources::ResourceSet* InternalGetResourceSet(mscorlib::System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents);
		mscorlib::System::Resources::ResourceSet* InternalGetResourceSet(mscorlib::System::Globalization::CultureInfo* requestedCulture, bool createIfNotExists, bool tryParents, mscorlib::System::Threading::StackCrawlMark& stackMark);
		static void AddResourceSet(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceSet>* localResourceSets, mscorlib::System::String* cultureName, mscorlib::System::Resources::ResourceSet& rs);
		static mscorlib::System::Version* GetSatelliteContractVersion(mscorlib::System::Reflection::Assembly* a);
		static mscorlib::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(mscorlib::System::Reflection::Assembly* a);
		static bool CompareNames(mscorlib::System::String* asmTypeName1, mscorlib::System::String* typeName2, mscorlib::System::Reflection::AssemblyName* asmName2);
		void SetAppXConfiguration();
		mscorlib::System::String* GetString(mscorlib::System::String* name, mscorlib::System::Globalization::CultureInfo* culture);
		static void _cctor();
	};
}

