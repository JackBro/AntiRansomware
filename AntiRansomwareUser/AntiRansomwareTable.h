#pragma once

typedef struct sItemNewFile { // 파일 생성 이벤트
	unsigned int num;
	bool isDirectory;
	CString strPath;
} ITEM_NEW_FILE;

typedef struct sItemWriteFile { // 파일 쓰기 이벤트
	unsigned int num;
	CString strPath;
	unsigned int num_back;
} ITEM_WRITE_FILE;

typedef struct sItemRenameFile { // 파일 이름 변경 이벤트
	unsigned int num;
	CString strSrc;
	CString strDst;
} ITEM_RENAME_FILE;

typedef struct sItemDeleteFile { // 파일 삭제 이벤트
	unsigned int num;
	bool isDirectory;
	CString strPath;
	unsigned int num_back;
} ITEM_DELETE_FILE;

typedef struct sItemBackupFile { // 파일 백업 기록
	unsigned int num;
	CString strPath;
} ITEM_BACKUP_FILE;

typedef struct sItemCheckFile { // 검사 대상 파일
	DWORD pid;
	CString strPath;
} ITEM_CHECK_FILE;