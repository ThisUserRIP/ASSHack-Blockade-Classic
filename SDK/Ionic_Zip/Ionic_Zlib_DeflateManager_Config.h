#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Ionic_Zlib_DeflateManager.h"
namespace Ionic_Zip::Ionic::Zlib { struct DeflateManager; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Ionic_Zlib_DeflateFlavor.h"
namespace Ionic_Zip::Ionic::Zlib { struct DeflateManager_Config; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Ionic_Zlib_CompressionLevel.h"

namespace Ionic_Zip::Ionic::Zlib
{
	struct DeflateManager_Config : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t GoodLength;
		int32_t MaxLazy;
		int32_t NiceLength;
		int32_t MaxChainLength;
		Ionic_Zip::Ionic::Zlib::DeflateFlavor Flavor;
		struct StaticFields
		{
			IL2CPP::Array<Ionic_Zip::Ionic::Zlib::DeflateManager_Config*>* Table;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t goodLength, int32_t maxLazy, int32_t niceLength, int32_t maxChainLength, Ionic_Zip::Ionic::Zlib::DeflateFlavor flavor);
		static Ionic_Zip::Ionic::Zlib::DeflateManager_Config* Lookup(Ionic_Zip::Ionic::Zlib::CompressionLevel level);
		static void _cctor();
	};
}

