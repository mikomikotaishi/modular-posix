/**
 * @file Net.cppm
 * @brief Module file for Unix system operations.
 *
 * This file contains the implementation of the Unix system operations from the POSIX libraries.
 */

export module posix.Sys;

export import posix.sys.Acct;
export import posix.sys.Acl;
export import posix.sys.AuxV;
export import posix.sys.Capability;
export import posix.sys.EPoll;
export import posix.sys.EventFD;
export import posix.sys.FANotify;
export import posix.sys.File;
export import posix.sys.FSUID;
export import posix.sys.GMon;
export import posix.sys.GMonOut;
export import posix.sys.INotify;
export import posix.sys.IO;
export import posix.sys.IOCtl;
export import posix.sys.IPC;
export import posix.sys.KLog;
export import posix.sys.MMan;
export import posix.sys.Mount;
export import posix.sys.Msg;
export import posix.sys.MTIO;
export import posix.sys.Perm;
export import posix.sys.Personality;
export import posix.sys.PIDFD;
export import posix.sys.Poll;
export import posix.sys.PRCtl;
export import posix.sys.ProcFS;
export import posix.sys.Profil;
export import posix.sys.PSXSysCall;
export import posix.sys.PTrace;
export import posix.sys.Quota;
export import posix.sys.Random;
export import posix.sys.Raw;
export import posix.sys.Reboot;
export import posix.sys.Resource;
export import posix.sys.RSeq;
export import posix.sys.Select;
export import posix.sys.Sem;
export import posix.sys.SendFile;
export import posix.sys.SHM;
export import posix.sys.SignalFD;
export import posix.sys.SingleThreaded;
export import posix.sys.Socket;
export import posix.sys.Stat;
export import posix.sys.StatFS;
export import posix.sys.StatVFS;
export import posix.sys.Swap;
export import posix.sys.SysInfo;
export import posix.sys.Time;
export import posix.sys.TimeB;
export import posix.sys.TimerFD;
export import posix.sys.TimeS;
export import posix.sys.TimeX;
export import posix.sys.TTYChars;
export import posix.sys.UContext;
export import posix.sys.UIO;
export import posix.sys.UN;
export import posix.sys.User;
export import posix.sys.UTSName;
export import posix.sys.VLimit;
export import posix.sys.Wait;
export import posix.sys.XAttr;
export import posix.sys.platform.X86;
