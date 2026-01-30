#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_Decompression_Zlib_DeflateManager.h"
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct DeflateManager; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "BestHTTP_Decompression_Zlib_DeflateFlavor.h"
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct DeflateManager_Config; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "BestHTTP_Decompression_Zlib_CompressionLevel.h"

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct DeflateManager_Config : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t GoodLength;
		int32_t MaxLazy;
		int32_t NiceLength;
		int32_t MaxChainLength;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateFlavor Flavor;
		struct StaticFields
		{
			IL2CPP::Array<Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager_Config*>* Table;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t goodLength, int32_t maxLazy, int32_t niceLength, int32_t maxChainLength, Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateFlavor flavor);
		static Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager_Config* Lookup(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level);
		static void _cctor();
	};
}

