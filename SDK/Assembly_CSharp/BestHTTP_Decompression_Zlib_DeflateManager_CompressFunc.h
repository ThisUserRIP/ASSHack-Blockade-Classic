#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "BestHTTP_Decompression_Zlib_DeflateManager.h"
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct DeflateManager; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "BestHTTP_Decompression_Zlib_BlockState.h"
#include "BestHTTP_Decompression_Zlib_FlushType.h"
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct DeflateManager_CompressFunc : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		Assembly_CSharp::BestHTTP::Decompression::Zlib::BlockState Invoke(Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType flush);
		mscorlib::System::IAsyncResult* BeginInvoke(Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType flush, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		Assembly_CSharp::BestHTTP::Decompression::Zlib::BlockState EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

