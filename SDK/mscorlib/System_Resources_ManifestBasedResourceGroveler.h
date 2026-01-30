#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Resources { struct ResourceManager_ResourceManagerMediator; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Resources { struct ResourceSet; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_StackCrawlMark.h"
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_Resources_UltimateResourceFallbackLocation.h"
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Reflection { struct RuntimeAssembly; };
namespace mscorlib::System { struct Int16; };
namespace mscorlib::System { struct Int16; };

namespace mscorlib::System::Resources
{
	struct ManifestBasedResourceGroveler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Resources::ResourceManager_ResourceManagerMediator* _mediator;
		void _ctor(mscorlib::System::Resources::ResourceManager_ResourceManagerMediator* mediator);
		mscorlib::System::Resources::ResourceSet* GrovelForResourceSet(mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceSet>* localResourceSets, bool tryParents, bool createIfNotExists, mscorlib::System::Threading::StackCrawlMark& stackMark);
		mscorlib::System::Globalization::CultureInfo* UltimateFallbackFixup(mscorlib::System::Globalization::CultureInfo* lookForCulture);
		static mscorlib::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(mscorlib::System::Reflection::Assembly* a, mscorlib::System::Resources::UltimateResourceFallbackLocation& fallbackLocation);
		mscorlib::System::Resources::ResourceSet* CreateResourceSet(mscorlib::System::IO::Stream* store, mscorlib::System::Reflection::Assembly* assembly);
		mscorlib::System::IO::Stream* GetManifestResourceStream(mscorlib::System::Reflection::RuntimeAssembly* satellite, mscorlib::System::String* fileName, mscorlib::System::Threading::StackCrawlMark& stackMark);
		mscorlib::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(mscorlib::System::Reflection::RuntimeAssembly* satellite, mscorlib::System::String* name);
		mscorlib::System::Reflection::RuntimeAssembly* GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo* lookForCulture, mscorlib::System::Threading::StackCrawlMark& stackMark);
		bool CanUseDefaultResourceClasses(mscorlib::System::String* readerTypeName, mscorlib::System::String* resSetTypeName);
		mscorlib::System::String* GetSatelliteAssemblyName();
		void HandleSatelliteMissing();
		void HandleResourceStreamMissing(mscorlib::System::String* fileName);
		static bool GetNeutralResourcesLanguageAttribute(mscorlib::System::Reflection::Assembly* assembly, mscorlib::System::String& cultureName, int16_t& fallbackLocation);
	};
}

