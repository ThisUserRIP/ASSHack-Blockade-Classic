#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "Ionic_Zlib_DeflateManager.h"
namespace Ionic_Zip::Ionic::Zlib { struct DeflateManager; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "Ionic_Zlib_BlockState.h"
#include "Ionic_Zlib_FlushType.h"
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Ionic_Zip::Ionic::Zlib
{
	struct DeflateManager_CompressFunc : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		Ionic_Zip::Ionic::Zlib::BlockState Invoke(Ionic_Zip::Ionic::Zlib::FlushType flush);
		mscorlib::System::IAsyncResult* BeginInvoke(Ionic_Zip::Ionic::Zlib::FlushType flush, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		Ionic_Zip::Ionic::Zlib::BlockState EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

